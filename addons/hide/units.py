# cd to the directory of this script
import os
os.chdir(os.path.dirname(os.path.abspath(__file__)))

# read units.txt
units = []
with open("units.txt") as f:
    units = [line.strip().rstrip(";") for line in f if line.strip()]

units = [unit.split(":") for unit in units if ":" in unit]

# there is now [classname, parent]
# sort the array so that classnames that have a parent come after that parent is defined
# example: ["B_Soldier_F", "SoldierWB"] should come after ["SoldierWB", "Soldier"]
units_dict = {unit[0]: unit[1] for unit in units}
sorted_units = []
while units_dict:
    for unit, parent in list(units_dict.items()):
        if parent not in units_dict:
            sorted_units.append((unit, parent))
            del units_dict[unit]
units = sorted_units

# get a list of all parents that are never defined as a classname
all_parents = set(unit[1] for unit in units)
defined_classnames = set(unit[0] for unit in units)
undefined_parents = all_parents - defined_classnames

# write the units.hpp file
with open("CfgVehicles_Generated.hpp", "w") as f:
    for external in undefined_parents:
        f.write(f"class {external};\n")
    f.write("\n")
    for unit, parent in units:
        f.write(f"class {unit}: {parent} {{ scope = 1; scopeCurator = 1; }};\n")
    f.write("\n")

# print a summary
print(f"Wrote {len(units)} units to CfgVehicles_Generated.hpp")
