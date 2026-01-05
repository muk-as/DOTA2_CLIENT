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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            bool m_bHasTriggerRadius; // 0x_            
            // metadata: MNotSaved
            bool m_bHasPickupRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            float m_flPickupRadiusSqr; // 0x_            
            // metadata: MNotSaved
            float m_flTriggerRadiusSqr; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0x_            
            // metadata: MNotSaved
            bool m_bPlayerCounterListenerAdded; // 0x_            
            // metadata: MNotSaved
            bool m_bPlayerInTriggerRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x_]; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0x_            
            // metadata: MNotSaved
            bool m_bAutoStartAmbientSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0x_            
            // metadata: MNotSaved
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x_]; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupSoundEffect; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupScriptFunction; // 0x_            
            // metadata: MNotSaved
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x_]; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pPickupFilterName; // 0x_            
            // metadata: MNotSaved
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0x_            
            // metadata: MNotSaved
            float m_flPickupRadius; // 0x_            
            // metadata: MNotSaved
            float m_flTriggerRadius; // 0x_            
            // metadata: MNotSaved
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0x_            
            // metadata: MNotSaved
            bool m_bGlowWhenInTrigger; // 0x_            
            // metadata: MNotSaved
            Color m_glowColor; // 0x_            
            // metadata: MNotSaved
            bool m_bUseable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x_
            // void InputStartAmbientSound; // 0x_
            // void InputStopAmbientSound; // 0x_
            // void InputToggleAmbientSound; // 0x_
            // void m_hAmbientSound; // 0x_
            // float auto_remove_timeout; // 0x_
            // float drag_override; // 0x_
            // float damping_override; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0x_);
    };
};
