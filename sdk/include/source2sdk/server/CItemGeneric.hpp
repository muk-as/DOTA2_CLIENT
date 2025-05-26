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
        // Size: 0xa28
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad08b0[0x14]; // 0x8b0
            bool m_bHasTriggerRadius; // 0x8c4            
            bool m_bHasPickupRadius; // 0x8c5            
            uint8_t _pad08c6[0x2]; // 0x8c6
            float m_flPickupRadiusSqr; // 0x8c8            
            float m_flTriggerRadiusSqr; // 0x8cc            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0x8d0            
            bool m_bPlayerCounterListenerAdded; // 0x8d4            
            bool m_bPlayerInTriggerRadius; // 0x8d5            
            uint8_t _pad08d6[0x2]; // 0x8d6
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0x8d8            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0x8e0            
            bool m_bAutoStartAmbientSound; // 0x8e8            
            uint8_t _pad08e9[0x7]; // 0x8e9
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0x8f0            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0x8f8            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0x900            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0x908            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0x910            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x918            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x920            
            CUtlSymbolLarge m_pPickupFilterName; // 0x928            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0x930            
            uint8_t _pad0934[0x4]; // 0x934
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x988            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0x9d8            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xa00            
            float m_flPickupRadius; // 0xa08            
            float m_flTriggerRadius; // 0xa0c            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xa10            
            bool m_bGlowWhenInTrigger; // 0xa18            
            Color m_glowColor; // 0xa19            
            bool m_bUseable; // 0xa1d            
            uint8_t _pad0a1e[0x2]; // 0xa1e
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xa20            
            uint8_t _pad0a24[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0x8b0
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xa28);
    };
};
