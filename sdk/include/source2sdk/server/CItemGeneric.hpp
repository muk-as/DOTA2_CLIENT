#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    class CItemGenericTriggerHelper;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x898[0x8]; // 0x898
        bool m_bHasTriggerRadius; // 0x8a0        
        bool m_bHasPickupRadius; // 0x8a1        
        [[maybe_unused]] std::uint8_t pad_0x8a2[0x2]; // 0x8a2
        float m_flPickupRadiusSqr; // 0x8a4        
        float m_flTriggerRadiusSqr; // 0x8a8        
        entity2::GameTime_t m_flLastPickupCheck; // 0x8ac        
        bool m_bPlayerCounterListenerAdded; // 0x8b0        
        bool m_bPlayerInTriggerRadius; // 0x8b1        
        [[maybe_unused]] std::uint8_t pad_0x8b2[0x6]; // 0x8b2
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0x8b8        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0x8c0        
        bool m_bAutoStartAmbientSound; // 0x8c8        
        [[maybe_unused]] std::uint8_t pad_0x8c9[0x7]; // 0x8c9
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0x8d0        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0x8d8        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0x8e0        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0x8e8        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0x8f0        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0x8f8        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0x900        
        CUtlSymbolLarge m_pPickupFilterName; // 0x908        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0x910        
        [[maybe_unused]] std::uint8_t pad_0x914[0x4]; // 0x914
        entity2::CEntityIOOutput m_OnPickup; // 0x918        
        entity2::CEntityIOOutput m_OnTimeout; // 0x940        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0x968        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0x990        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0x9b8        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0x9e0        
        float m_flPickupRadius; // 0x9e8        
        float m_flTriggerRadius; // 0x9ec        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0x9f0        
        bool m_bGlowWhenInTrigger; // 0x9f8        
        Color m_glowColor; // 0x9f9        
        bool m_bUseable; // 0x9fd        
        [[maybe_unused]] std::uint8_t pad_0x9fe[0x2]; // 0x9fe
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa04[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0x898
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xa08);
};
