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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class SPingWheelMessageDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "unique integer ID of this ping wheel message"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::PingWheelMessageID_t nID; // 0x_            
            // metadata: MPropertyDescription "optional ID of associated message, like enemy/friendly wards"
            source2sdk::client::PingWheelMessageID_t nAssociatedID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "localization string ID for name of ping"
            CUtlString sLocName; // 0x_            
            // metadata: MPropertyDescription "Particle system of ping effect"
            // sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticle;
            char sParticle[0x_]; // 0x_            
            // metadata: MPropertyDescription "Particle system of ping effect when targetting an npc (optional)"
            // sParticleTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> sParticleTarget;
            char sParticleTarget[0x_]; // 0x_            
            // metadata: MPropertyDescription "Color of ping effect. Leave default to use pinging player color."
            // metadata: MPropertyColorPlusAlpha
            Color color; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Image shown while customizing ping wheel"
            CPanoramaImageName sImage; // 0x_            
            // metadata: MPropertyDescription "Sound played when pinging"
            // metadata: MPropertyCustomFGDType "sound"
            CUtlString sSound; // 0x_            
            // metadata: MPropertyDescription "localization string ID for chat message when pinging"
            CUtlString sChat; // 0x_            
            // metadata: MPropertyDescription "localization string ID for chat message when pinging a target entity"
            CUtlString sChatWithTarget; // 0x_            
            // metadata: MPropertyDescription "Event for tracking expiration. See EEvent enum"
            source2sdk::client::EEvent eUnlockEvent; // 0x_            
            // metadata: MPropertyDescription "Action of the unlock event which awards this ping wheel"
            std::uint32_t nUnlockEventActionID; // 0x_            
            // metadata: MPropertyDescription "Duration to show a ping on the the minimap."
            float m_flMinimapDuration; // 0x_            
            // metadata: MPropertyDescription "Whether or not to flash the pinged unit's icon."
            bool m_bFlashTargetIcon; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::PingMinimapIconInfo_t m_minimapIconInfo; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Optional additional layers."
            // m_vecAdditionalMinimapLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PingMinimapIconLayerInfo_t> m_vecAdditionalMinimapLayers;
            char m_vecAdditionalMinimapLayers[0x_]; // 0x_            
            source2sdk::client::PingParticleInfo_t m_particleInfo; // 0x_            
            bool m_bRequiresDotaPlus; // 0x_            
            bool m_bIsBindable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nID) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nAssociatedID) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sParticleTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, color) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sSound) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sChat) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, sChatWithTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, eUnlockEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, nUnlockEventActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_flMinimapDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bFlashTargetIcon) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_minimapIconInfo) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_vecAdditionalMinimapLayers) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_particleInfo) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bRequiresDotaPlus) == 0x_);
        static_assert(offsetof(source2sdk::client::SPingWheelMessageDefinition, m_bIsBindable) == 0x_);
        
        static_assert(sizeof(source2sdk::client::SPingWheelMessageDefinition) == 0x_);
    };
};
