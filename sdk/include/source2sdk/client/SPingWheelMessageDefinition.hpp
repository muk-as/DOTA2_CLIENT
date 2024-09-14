#pragma once
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/PingWheelMessageID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x210
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class SPingWheelMessageDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xc]; // 0x0
        // metadata: MPropertyDescription "unique integer ID of this ping wheel message"
        // metadata: MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::PingWheelMessageID_t nID; // 0xc        
        // metadata: MPropertyDescription "localization string ID for name of ping"
        CUtlString sLocName; // 0x10        
        // metadata: MPropertyDescription "Particle system of ping effect"
        // sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticle;
        char sParticle[0xe0]; // 0x18        
        // metadata: MPropertyDescription "Particle system of ping effect when targetting an npc (optional)"
        // sParticleTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticleTarget;
        char sParticleTarget[0xe0]; // 0xf8        
        // metadata: MPropertyDescription "Color of ping effect. Leave default to use pinging player color."
        // metadata: MPropertyColorPlusAlpha
        Color color; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        // metadata: MPropertyDescription "Image shown while customizing ping wheel"
        CPanoramaImageName sImage; // 0x1e0        
        // metadata: MPropertyDescription "Sound played when pinging"
        // metadata: MPropertyCustomFGDType "sound"
        CUtlString sSound; // 0x1f0        
        // metadata: MPropertyDescription "localization string ID for chat message when pinging"
        CUtlString sChat; // 0x1f8        
        // metadata: MPropertyDescription "Multiplier to apply to 3 second base duration (dota_minimap_ping_duration)"
        float fDurationMultiplier; // 0x200        
        // metadata: MPropertyDescription "Event for tracking expiration. See EEvent enum"
        client::EEvent eUnlockEvent; // 0x204        
        // metadata: MPropertyDescription "Action of the unlock event which awards this ping wheel"
        uint32_t nUnlockEventActionID; // 0x208        
        // metadata: MPropertyDescription "ID of icon to show on minimap. See scripts/minimap_icons.txt"
        int32_t nMinimapIcon; // 0x20c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SPingWheelMessageDefinition, nID) == 0xc);
    static_assert(offsetof(SPingWheelMessageDefinition, sLocName) == 0x10);
    static_assert(offsetof(SPingWheelMessageDefinition, sParticle) == 0x18);
    static_assert(offsetof(SPingWheelMessageDefinition, sParticleTarget) == 0xf8);
    static_assert(offsetof(SPingWheelMessageDefinition, color) == 0x1d8);
    static_assert(offsetof(SPingWheelMessageDefinition, sImage) == 0x1e0);
    static_assert(offsetof(SPingWheelMessageDefinition, sSound) == 0x1f0);
    static_assert(offsetof(SPingWheelMessageDefinition, sChat) == 0x1f8);
    static_assert(offsetof(SPingWheelMessageDefinition, fDurationMultiplier) == 0x200);
    static_assert(offsetof(SPingWheelMessageDefinition, eUnlockEvent) == 0x204);
    static_assert(offsetof(SPingWheelMessageDefinition, nUnlockEventActionID) == 0x208);
    static_assert(offsetof(SPingWheelMessageDefinition, nMinimapIcon) == 0x20c);
    
    static_assert(sizeof(SPingWheelMessageDefinition) == 0x210);
};
