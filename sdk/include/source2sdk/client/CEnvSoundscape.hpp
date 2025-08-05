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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscape : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnPlay; // 0x5e8            
            float m_flRadius; // 0x610            
            uint8_t _pad0614[0x4]; // 0x614
            CUtlSymbolLarge m_soundEventName; // 0x618            
            bool m_bOverrideWithEvent; // 0x620            
            uint8_t _pad0621[0x3]; // 0x621
            std::int32_t m_soundscapeIndex; // 0x624            
            std::int32_t m_soundscapeEntityListId; // 0x628            
            uint8_t _pad062c[0x4]; // 0x62c
            CUtlSymbolLarge m_positionNames[8]; // 0x630            
            // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CEnvSoundscape> m_hProxySoundscape;
            char m_hProxySoundscape[0x4]; // 0x670            
            bool m_bDisabled; // 0x674            
            uint8_t _pad0675[0x3]; // 0x675
            CUtlSymbolLarge m_soundscapeName; // 0x678            
            std::uint32_t m_soundEventHash; // 0x680            
            uint8_t _pad0684[0x4];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggleEnabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CEnvSoundscape) == 0x688);
    };
};
