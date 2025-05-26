#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tiny_Tree_Grab : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t attack_count; // 0x1878            
            std::int32_t bonus_damage; // 0x187c            
            std::int32_t bonus_damage_buildings; // 0x1880            
            float stun_duration; // 0x1884            
            std::int32_t attack_range; // 0x1888            
            std::int32_t m_nOriginalAttackCapability; // 0x188c            
            float bat_increase; // 0x1890            
            std::int32_t speed_reduction; // 0x1894            
            std::int32_t m_nBonusAttackRange; // 0x1898            
            // m_hStolenTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStolenTree;
            char m_hStolenTree[0x4]; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXAttackIndex; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Tree_Grab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tiny_Tree_Grab) == 0x18a8);
    };
};
