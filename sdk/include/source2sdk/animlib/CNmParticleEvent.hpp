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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmParticleEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventRelevance_t m_relevance; // 0x20            
            source2sdk::animlib::CNmParticleEvent_Type_t m_type; // 0x24            
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hParticleSystem;
            char m_hParticleSystem[0x8]; // 0x28            
            CUtlString m_tags; // 0x30            
            bool m_bStopImmediately; // 0x38            
            uint8_t _pad0039[0x7]; // 0x39
            CUtlString m_attachmentPoint0; // 0x40            
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType0; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            CUtlString m_attachmentPoint1; // 0x50            
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType1; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            CUtlString m_config; // 0x60            
            CUtlString m_effectForConfig; // 0x68            
            bool m_bDetachFromOwner; // 0x70            
            bool m_bPlayEndCap; // 0x71            
            uint8_t _pad0072[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmParticleEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmParticleEvent) == 0x78);
    };
};
