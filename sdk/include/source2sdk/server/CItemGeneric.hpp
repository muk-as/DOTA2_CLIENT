#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CItemGenericTriggerHelper;
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
        // Size: 0xa50
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad08d8[0x14]; // 0x8d8
            bool m_bHasTriggerRadius; // 0x8ec            
            bool m_bHasPickupRadius; // 0x8ed            
            uint8_t _pad08ee[0x2]; // 0x8ee
            float m_flPickupRadiusSqr; // 0x8f0            
            float m_flTriggerRadiusSqr; // 0x8f4            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0x8f8            
            bool m_bPlayerCounterListenerAdded; // 0x8fc            
            bool m_bPlayerInTriggerRadius; // 0x8fd            
            uint8_t _pad08fe[0x2]; // 0x8fe
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0x900            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0x908            
            bool m_bAutoStartAmbientSound; // 0x910            
            uint8_t _pad0911[0x7]; // 0x911
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0x918            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0x920            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0x928            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0x930            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0x938            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x940            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x948            
            CUtlSymbolLarge m_pPickupFilterName; // 0x950            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0x958            
            uint8_t _pad095c[0x4]; // 0x95c
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x988            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xa00            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xa28            
            float m_flPickupRadius; // 0xa30            
            float m_flTriggerRadius; // 0xa34            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xa38            
            bool m_bGlowWhenInTrigger; // 0xa40            
            Color m_glowColor; // 0xa41            
            bool m_bUseable; // 0xa45            
            uint8_t _pad0a46[0x2]; // 0xa46
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xa48            
            uint8_t _pad0a4c[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0x8d8
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xa50);
    };
};
