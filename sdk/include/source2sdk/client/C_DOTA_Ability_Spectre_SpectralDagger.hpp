#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Spectre_SpectralDagger : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float dagger_path_duration; // 0x_            
            float hero_path_duration; // 0x_            
            float m_fCreateInterval; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastCreate; // 0x_            
            Vector m_vecLastPosition; // 0x_            
            bool m_bIsTrackingProjectile; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTrackingProjectileHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hTrackingProjectileHits;
            char m_hTrackingProjectileHits[0x_]; // 0x_            
            // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hUnitsHit;
            char m_hUnitsHit[0x_]; // 0x_            
            bool m_bIsThinkHit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTrackingTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrackingTarget;
            char m_hTrackingTarget[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Spectre_SpectralDagger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Spectre_SpectralDagger) == 0x_);
    };
};
