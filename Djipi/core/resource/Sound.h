#pragma once

#include <iostream>
#include <SDL_mixer.h>

#include <Resource.h>
#include <Log.h>

namespace Djipi
{
	class Sound : public Resource
	{
	public:
		Sound() = default;
		Sound(std::string path) : m_Sound(nullptr), m_Path(path) {}

		bool Load() override { return false; }
		bool Unload() override { return false; }
		bool Reload() override { return true; }

	private:
		Mix_Chunk* m_Sound;
		std::string m_Path;
	};
}