#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsPickupID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPickupDefinition
        {
        public:
            source2sdk::client::SurvivorsPickupID_t m_unPickupID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sPowerUpName; // 0x_            
            // m_sParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleEffect;
            char m_sParticleEffect[0x_]; // 0x_            
            std::int32_t m_nModelIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sDirectionalHelperParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDirectionalHelperParticle;
            char m_sDirectionalHelperParticle[0x_]; // 0x_            
            // m_sOnPickupOverheadEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sOnPickupOverheadEffect;
            char m_sOnPickupOverheadEffect[0x_]; // 0x_            
            std::int32_t m_nHealAmount; // 0x_            
            std::int32_t m_nGoldAmount; // 0x_            
            bool m_bRewardsTreasure; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nTreasureVariant; // 0x_            
            bool m_bShowInMinimap; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sMinimapIconSnippet; // 0x_            
            bool m_bCanSpawnWithVelocity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxSpawnVelocity; // 0x_            
            CUtlString m_sDropSoundEvent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_unPickupID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sPowerUpName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sParticleEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nModelIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sDirectionalHelperParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sOnPickupOverheadEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nHealAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nGoldAmount) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bRewardsTreasure) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nTreasureVariant) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bShowInMinimap) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sMinimapIconSnippet) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bCanSpawnWithVelocity) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_flMaxSpawnVelocity) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sDropSoundEvent) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPickupDefinition) == 0x_);
    };
};
