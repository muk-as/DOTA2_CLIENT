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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x2f8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPickupDefinition
        {
        public:
            source2sdk::client::SurvivorsPickupID_t m_unPickupID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_sPowerUpName; // 0x8            
            // m_sParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleEffect;
            char m_sParticleEffect[0xe0]; // 0x10            
            std::int32_t m_nModelIndex; // 0xf0            
            uint8_t _pad00f4[0x4]; // 0xf4
            // m_sDirectionalHelperParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDirectionalHelperParticle;
            char m_sDirectionalHelperParticle[0xe0]; // 0xf8            
            // m_sOnPickupOverheadEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sOnPickupOverheadEffect;
            char m_sOnPickupOverheadEffect[0xe0]; // 0x1d8            
            std::int32_t m_nHealAmount; // 0x2b8            
            std::int32_t m_nGoldAmount; // 0x2bc            
            bool m_bRewardsTreasure; // 0x2c0            
            uint8_t _pad02c1[0x3]; // 0x2c1
            std::int32_t m_nTreasureVariant; // 0x2c4            
            bool m_bShowInMinimap; // 0x2c8            
            uint8_t _pad02c9[0x7]; // 0x2c9
            CUtlString m_sMinimapIconSnippet; // 0x2d0            
            bool m_bCanSpawnWithVelocity; // 0x2d8            
            uint8_t _pad02d9[0x3]; // 0x2d9
            float m_flMaxSpawnVelocity; // 0x2dc            
            CUtlString m_sDropSoundEvent; // 0x2e0            
            uint8_t _pad02e8[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_unPickupID) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sPowerUpName) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sParticleEffect) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nModelIndex) == 0xf0);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sDirectionalHelperParticle) == 0xf8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sOnPickupOverheadEffect) == 0x1d8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nHealAmount) == 0x2b8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nGoldAmount) == 0x2bc);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bRewardsTreasure) == 0x2c0);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_nTreasureVariant) == 0x2c4);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bShowInMinimap) == 0x2c8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sMinimapIconSnippet) == 0x2d0);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_bCanSpawnWithVelocity) == 0x2d8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_flMaxSpawnVelocity) == 0x2dc);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupDefinition, m_sDropSoundEvent) == 0x2e0);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPickupDefinition) == 0x2f8);
    };
};
