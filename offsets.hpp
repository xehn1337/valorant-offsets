#pragma once
#include <cstdint>
namespace VALROM {
    namespace offsets
{
	// global
	constexpr uintptr_t uworld_key = 0x8E784B8; 
	constexpr uintptr_t uworld_state = 0x8E78480;
	constexpr uintptr_t g_object_state = 0x8CE6800;
	constexpr uintptr_t g_object_key = 0x8CE6838;
	constexpr uintptr_t line_of_sight = 0x495E1D0;
	constexpr uintptr_t bone_matrix = 0x49242E0;

	// world
	constexpr uintptr_t persistent_level = 0x38;			// world > persistent_level
	constexpr uintptr_t game_instance = 0x1A0;				// world > game_instance

	// player
	constexpr uintptr_t localplayers_array = 0x40;			// world > game_instance > localplayers_array
	constexpr uintptr_t localplayer = 0x40;				// world > game_instance > localplayers_array[0]
	constexpr uintptr_t player_controller = 0x38;			// world > game_instance > localplayers_array[0] > playercontroller
	constexpr uintptr_t apawn = 0x460;					// world > game_instance > localplayers_array[0] > playercontroller > apawn									// aactor > apawn

	// vector
	constexpr uintptr_t root_component = 0x230;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component				// aactor > root_component
	constexpr uintptr_t root_position = 0x164;				// world > game_instance > localplayers_array[0] > playercontroller > apawn > root_component > root_position		// aactor > root_component > position
	
	// controllers
	constexpr uintptr_t damage_handler = 0x9A8;			// world > game_instance > localplayers_array[0] > playercontroller > apawn > damage_handler			// aactor > damage_controller
	constexpr uintptr_t camera_controller = 0x440;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller

	// camera
	constexpr uintptr_t camera_position = 0x1260;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_position
	constexpr uintptr_t camera_rotation = 0x126C;			// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_rotation
	constexpr uintptr_t camera_fov = 0x1278;				// world > game_instance > localplayers_array[0] > playercontroller > camera_controller > camera_fov
	constexpr uintptr_t camera_manager = 0x478;			// world > game_instance > localplayers_array[0] > playercontroller > camera_manager


	// level > actors
	constexpr uintptr_t actor_array = 0xA0;				// world > persistent_level > actor_array
	constexpr uintptr_t actors_count = 0xB8;				// world > persistent_level > actors_count

	// level > actors info
	constexpr uintptr_t actor_id = 0x18;				// world > persistent_level > aactor > actor_id
	constexpr uintptr_t unique_id = 0x38;				// world > persistent_level > aactor > unique_id
	constexpr uintptr_t team_component = 0x628;			// world > persistent_level > aactor > player_state > team_component
	constexpr uintptr_t team_id = 0xF8;				// world > persistent_level > aactor > team_component > team_id
	constexpr uintptr_t health = 0x1B0;				// world > persistent_level > aactor > damage_controller > health
	constexpr uintptr_t dormant = 0x100;				// world > persistent_level > aactor > dormant
	constexpr uintptr_t player_state = 0x3F0;				// world > persistent_level > aactor > player_state

	// mesh
	constexpr uintptr_t mesh = 0x430;					// world > persistent_level > aactor > mesh
	constexpr uintptr_t component_to_world = 0x250;			// world > persistent_level > aactor > mesh > component_to_world
	constexpr uintptr_t bone_array = 0x5B0;				// world > persistent_level > aactor > mesh > bone_array
	constexpr uintptr_t bone_count = 0x5B8;				// world > persistent_level > aactor > mesh > bone_array + (index * bone_count)
}
