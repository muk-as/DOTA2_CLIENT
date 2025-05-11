#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Kill.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_DemonicConversion : public source2sdk::server::CDOTA_Modifier_Kill
        {
        public:
            std::int32_t m_iAttackCount; // 0x1800            
            std::int32_t split_attack_count; // 0x1804            
            float life_extension; // 0x1808            
            std::int32_t eidolon_attack_range; // 0x180c            
            std::int32_t eidolon_bonus_damage; // 0x1810            
            std::int32_t eidolon_bonus_attack_speed; // 0x1814            
            bool m_bAllowSplit; // 0x1818            
            uint8_t _pad1819[0x3]; // 0x1819
            std::int32_t m_nSpawnNum; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_DemonicConversion) == 0x1820);
    };
};
