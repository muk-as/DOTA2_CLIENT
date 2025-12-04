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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Oracle_FortunesEnd : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t damage; // 0x_            
            float radius; // 0x_            
            std::int32_t bolt_speed; // 0x_            
            float maximum_purge_duration; // 0x_            
            float minimum_purge_duration; // 0x_            
            bool purge_constantly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            float m_flDuration; // 0x_            
            float m_flDamage; // 0x_            
            bool m_bAbsorbed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Oracle_FortunesEnd because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Oracle_FortunesEnd) == 0x_);
    };
};
