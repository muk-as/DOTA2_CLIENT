#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tiny_Tree_Grab : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t attack_count; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            std::int32_t bonus_damage_buildings; // 0x_            
            float stun_duration; // 0x_            
            std::int32_t attack_range; // 0x_            
            std::int32_t m_nOriginalAttackCapability; // 0x_            
            float bat_increase; // 0x_            
            std::int32_t speed_reduction; // 0x_            
            std::int32_t m_nBonusAttackRange; // 0x_            
            // m_hStolenTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStolenTree;
            char m_hStolenTree[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXAttackIndex; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Tree_Grab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tiny_Tree_Grab) == 0x_);
    };
};
