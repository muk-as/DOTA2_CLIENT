#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Kill.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_DemonicConversion : public source2sdk::client::CDOTA_Modifier_Kill
        {
        public:
            std::int32_t m_iAttackCount; // 0x1890            
            std::int32_t split_attack_count; // 0x1894            
            float life_extension; // 0x1898            
            std::int32_t eidolon_attack_range; // 0x189c            
            std::int32_t eidolon_bonus_damage; // 0x18a0            
            std::int32_t eidolon_bonus_attack_speed; // 0x18a4            
            bool m_bAllowSplit; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            std::int32_t m_nSpawnNum; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enigma_DemonicConversion) == 0x18b0);
    };
};
