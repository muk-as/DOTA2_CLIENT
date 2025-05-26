#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/PingMinimapIconInfo_t.hpp"
#include "source2sdk/client/PingMinimapIconLayerInfo_t.hpp"
#include "source2sdk/client/PingParticleInfo_t.hpp"
#include "source2sdk/client/PingWheelMessageID_t.hpp"
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
        // Size: 0x278
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class SPingWheelMessageDefinition
        {
        public:
            uint8_t _pad0000[0xc]; // 0x0
            // metadata: MPropertyDescription "unique integer ID of this ping wheel message"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::PingWheelMessageID_t nID; // 0xc            
            // metadata: MPropertyDescription "optional ID of associated message, like enemy/friendly wards"
            source2sdk::client::PingWheelMessageID_t nAssociatedID; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            // metadata: MPropertyDescription "localization string ID for name of ping"
            CUtlString sLocName; // 0x18            
            // metadata: MPropertyDescription "Particle system of ping effect"
            // sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticle;
            char sParticle[0xe0]; // 0x20            
            // metadata: MPropertyDescription "Particle system of ping effect when targetting an npc (optional)"
            // sParticleTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticleTarget;
            char sParticleTarget[0xe0]; // 0x100            
            // metadata: MPropertyDescription "Color of ping effect. Leave default to use pinging player color."
            // metadata: MPropertyColorPlusAlpha
            Color color; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyDescription "Image shown while customizing ping wheel"
            CPanoramaImageName sImage; // 0x1e8            
            // metadata: MPropertyDescription "Sound played when pinging"
            // metadata: MPropertyCustomFGDType "sound"
            CUtlString sSound; // 0x1f8            
            // metadata: MPropertyDescription "localization string ID for chat message when pinging"
            CUtlString sChat; // 0x200            
            // metadata: MPropertyDescription "localization string ID for chat message when pinging a target entity"
            CUtlString sChatWithTarget; // 0x208            
            // metadata: MPropertyDescription "Event for tracking expiration. See EEvent enum"
            source2sdk::client::EEvent eUnlockEvent; // 0x210            
            // metadata: MPropertyDescription "Action of the unlock event which awards this ping wheel"
            std::uint32_t nUnlockEventActionID; // 0x214            
            // metadata: MPropertyDescription "Duration to show a ping on the the minimap."
            float m_flMinimapDuration; // 0x218            
            // metadata: MPropertyDescription "Whether or not to flash the pinged unit's icon."
            bool m_bFlashTargetIcon; // 0x21c            
            uint8_t _pad021d[0x3]; // 0x21d
            source2sdk::client::PingMinimapIconInfo_t m_minimapIconInfo; // 0x220            
            uint8_t _pad0244[0x4]; // 0x244
            // metadata: MPropertyDescription "Optional additional layers."
            // m_vecAdditionalMinimapLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PingMinimapIconLayerInfo_t> m_vecAdditionalMinimapLayers;
            char m_vecAdditionalMinimapLayers[0x18]; // 0x248            
            source2sdk::client::PingParticleInfo_t m_particleInfo; // 0x260            
            bool m_bRequiresDotaPlus; // 0x274            
            bool m_bIsBindable; // 0x275            
            uint8_t _pad0276[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nID) == 0xc);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nAssociatedID) == 0x10);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sLocName) == 0x18);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sParticle) == 0x20);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sParticleTarget) == 0x100);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, color) == 0x1e0);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sImage) == 0x1e8);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sSound) == 0x1f8);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sChat) == 0x200);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sChatWithTarget) == 0x208);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, eUnlockEvent) == 0x210);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nUnlockEventActionID) == 0x214);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_flMinimapDuration) == 0x218);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bFlashTargetIcon) == 0x21c);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_minimapIconInfo) == 0x220);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_vecAdditionalMinimapLayers) == 0x248);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_particleInfo) == 0x260);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bRequiresDotaPlus) == 0x274);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bIsBindable) == 0x275);
        
        static_assert(sizeof(source2sdk::client::SPingWheelMessageDefinition) == 0x278);
    };
};
