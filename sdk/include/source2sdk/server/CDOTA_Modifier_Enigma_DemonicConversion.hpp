#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Kill.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_DemonicConversion : public source2sdk::server::CDOTA_Modifier_Kill
        {
        public:
            std::int32_t m_iAttackCount; // 0x1880            
            std::int32_t split_attack_count; // 0x1884            
            float life_extension; // 0x1888            
            std::int32_t eidolon_attack_range; // 0x188c            
            std::int32_t eidolon_bonus_damage; // 0x1890            
            std::int32_t eidolon_bonus_attack_speed; // 0x1894            
            bool m_bAllowSplit; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            std::int32_t m_nSpawnNum; // 0x189c            
            // attack_target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> attack_target;
            char attack_target[0x4]; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_DemonicConversion) == 0x18a8);
    };
};
