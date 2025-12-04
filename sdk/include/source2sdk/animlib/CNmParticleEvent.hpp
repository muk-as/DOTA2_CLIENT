#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/CNmEventRelevance_t.hpp"
#include "source2sdk/animlib/CNmParticleEvent_Type_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmParticleEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventRelevance_t m_relevance; // 0x_            
            source2sdk::animlib::CNmParticleEvent_Type_t m_type; // 0x_            
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hParticleSystem;
            char m_hParticleSystem[0x_]; // 0x_            
            CUtlString m_tags; // 0x_            
            bool m_bStopImmediately; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_attachmentPoint0; // 0x_            
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType0; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_attachmentPoint1; // 0x_            
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType1; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_config; // 0x_            
            CUtlString m_effectForConfig; // 0x_            
            bool m_bDetachFromOwner; // 0x_            
            bool m_bPlayEndCap; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmParticleEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmParticleEvent) == 0x_);
    };
};
