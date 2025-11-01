import requests

base_url = "https://pokeapi.co/api/v2/"

def get_pokemon_info(name):
    url = f"{base_url}/pokemon/{name}"
    response = requests.get(url) #returns a response object
    print(response) #returns http response status codes
    
    if response.status_code == 200:
        pokemon_data = response.json() #converts json data to python dictionary
        return pokemon_data
    else:
        print(f"Failed to retrieve data {response.status_code}")
    
pokemon_name = "mewtwo"

pokemon_info = get_pokemon_info(pokemon_name)

if pokemon_info:
    print(f"{pokemon_info["name"].capitalize()}")
    print(f"{pokemon_info["id"]}")