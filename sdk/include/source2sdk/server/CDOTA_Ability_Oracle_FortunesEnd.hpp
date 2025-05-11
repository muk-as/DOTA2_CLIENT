#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Oracle_FortunesEnd : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t damage; // 0x5b8            
            float radius; // 0x5bc            
            std::int32_t bolt_speed; // 0x5c0            
            float maximum_purge_duration; // 0x5c4            
            float minimum_purge_duration; // 0x5c8            
            bool purge_constantly; // 0x5cc            
            uint8_t _pad05cd[0x3]; // 0x5cd
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x5d0            
            float m_flDuration; // 0x5d4            
            float m_flDamage; // 0x5d8            
            bool m_bAbsorbed; // 0x5dc            
            uint8_t _pad05dd[0x3]; // 0x5dd
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5e0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Oracle_FortunesEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Oracle_FortunesEnd) == 0x5e8);
    };
};
