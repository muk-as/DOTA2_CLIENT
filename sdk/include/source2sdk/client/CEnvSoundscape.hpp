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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscape : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnPlay; // 0x510            
            float m_flRadius; // 0x538            
            uint8_t _pad053c[0x4]; // 0x53c
            CUtlSymbolLarge m_soundEventName; // 0x540            
            bool m_bOverrideWithEvent; // 0x548            
            uint8_t _pad0549[0x3]; // 0x549
            std::int32_t m_soundscapeIndex; // 0x54c            
            std::int32_t m_soundscapeEntityListId; // 0x550            
            uint8_t _pad0554[0x4]; // 0x554
            CUtlSymbolLarge m_positionNames[8]; // 0x558            
            // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CEnvSoundscape> m_hProxySoundscape;
            char m_hProxySoundscape[0x4]; // 0x598            
            bool m_bDisabled; // 0x59c            
            uint8_t _pad059d[0x3]; // 0x59d
            CUtlSymbolLarge m_soundscapeName; // 0x5a0            
            std::uint32_t m_soundEventHash; // 0x5a8            
            uint8_t _pad05ac[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggleEnabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CEnvSoundscape) == 0x5b0);
    };
};
