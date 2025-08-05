#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Oracle_FortunesEnd : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t damage; // 0x688            
            float radius; // 0x68c            
            std::int32_t bolt_speed; // 0x690            
            float maximum_purge_duration; // 0x694            
            float minimum_purge_duration; // 0x698            
            bool purge_constantly; // 0x69c            
            uint8_t _pad069d[0x3]; // 0x69d
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x6a0            
            float m_flDuration; // 0x6a4            
            float m_flDamage; // 0x6a8            
            bool m_bAbsorbed; // 0x6ac            
            uint8_t _pad06ad[0x3]; // 0x6ad
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x6b0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Oracle_FortunesEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Oracle_FortunesEnd) == 0x6b8);
    };
};
