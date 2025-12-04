#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Particle Tag"
        #pragma pack(push, 1)
        class CParticleAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressField
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hParticleSystem;
            char m_hParticleSystem[0x_]; // 0x_            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vpcf )"
            // metadata: MPropertyFriendlyName "Particle System"
            CUtlString m_particleSystemName; // 0x_            
            // metadata: MPropertyFriendlyName "Configuration"
            CUtlString m_configName; // 0x_            
            // metadata: MPropertyFriendlyName "Detach From Owner"
            bool m_bDetachFromOwner; // 0x_            
            // metadata: MPropertyFriendlyName "Attempt to Aggregate"
            bool m_bAggregate; // 0x_            
            // metadata: MPropertyFriendlyName "Stop on Tag End"
            // metadata: MPropertyGroupName "Ending"
            bool m_bStopWhenTagEnds; // 0x_            
            // metadata: MPropertyFriendlyName "Tag End Stop is Instant"
            // metadata: MPropertyGroupName "Ending"
            bool m_bTagEndStopIsInstant; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Attachment"
            // metadata: MPropertyGroupName "Attachments"
            // metadata: MPropertyAttributeChoiceName "Attachment"
            CUtlString m_attachmentName; // 0x_            
            // metadata: MPropertyFriendlyName "Attachment Type"
            // metadata: MPropertyGroupName "Attachments"
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Attachment (Control Point 1)"
            // metadata: MPropertyGroupName "Attachments"
            // metadata: MPropertyAttributeChoiceName "Attachment"
            CUtlString m_attachmentCP1Name; // 0x_            
            // metadata: MPropertyFriendlyName "Attachment Type (Control Point 1)"
            // metadata: MPropertyGroupName "Attachments"
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentCP1Type; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CParticleAnimTag) == 0x_);
    };
};
