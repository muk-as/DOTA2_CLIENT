#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x680
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscape : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnPlay; // 0x5e0            
            float m_flRadius; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            CUtlSymbolLarge m_soundEventName; // 0x610            
            bool m_bOverrideWithEvent; // 0x618            
            uint8_t _pad0619[0x3]; // 0x619
            std::int32_t m_soundscapeIndex; // 0x61c            
            std::int32_t m_soundscapeEntityListId; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            CUtlSymbolLarge m_positionNames[8]; // 0x628            
            // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CEnvSoundscape> m_hProxySoundscape;
            char m_hProxySoundscape[0x4]; // 0x668            
            bool m_bDisabled; // 0x66c            
            uint8_t _pad066d[0x3]; // 0x66d
            CUtlSymbolLarge m_soundscapeName; // 0x670            
            std::uint32_t m_soundEventHash; // 0x678            
            uint8_t _pad067c[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggleEnabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CEnvSoundscape) == 0x680);
    };
};
