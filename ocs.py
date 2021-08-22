import requests

url = "http://201.62.64.3:25041/ocsapi/v1/"

ids = [2, 3, 4, 5, 7, 8, 9, 10, 13, 15]

url_ids = url + "computers/listID"

url_hardware = url + f"computer/{ids[0]}/hardware"

url_software = url + f"computer/{ids[0]}"

r = requests.get(url_ids)

print(r.text.replace(",", "\n")) 