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
        // Size: 0xa00
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0890[0x8]; // 0x890
            bool m_bHasTriggerRadius; // 0x898            
            bool m_bHasPickupRadius; // 0x899            
            uint8_t _pad089a[0x2]; // 0x89a
            float m_flPickupRadiusSqr; // 0x89c            
            float m_flTriggerRadiusSqr; // 0x8a0            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0x8a4            
            bool m_bPlayerCounterListenerAdded; // 0x8a8            
            bool m_bPlayerInTriggerRadius; // 0x8a9            
            uint8_t _pad08aa[0x6]; // 0x8aa
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0x8b0            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0x8b8            
            bool m_bAutoStartAmbientSound; // 0x8c0            
            uint8_t _pad08c1[0x7]; // 0x8c1
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0x8c8            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0x8d0            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0x8d8            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0x8e0            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0x8e8            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x8f0            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x8f8            
            CUtlSymbolLarge m_pPickupFilterName; // 0x900            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0x908            
            uint8_t _pad090c[0x4]; // 0x90c
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0x988            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0x9b0            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0x9d8            
            float m_flPickupRadius; // 0x9e0            
            float m_flTriggerRadius; // 0x9e4            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0x9e8            
            bool m_bGlowWhenInTrigger; // 0x9f0            
            Color m_glowColor; // 0x9f1            
            bool m_bUseable; // 0x9f5            
            uint8_t _pad09f6[0x2]; // 0x9f6
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0x9f8            
            uint8_t _pad09fc[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0x890
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xa00);
    };
};
