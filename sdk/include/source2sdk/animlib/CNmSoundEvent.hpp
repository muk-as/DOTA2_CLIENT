#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/CNmEventRelevance_t.hpp"
#include "source2sdk/animlib/CNmSoundEvent_Position_t.hpp"
#include "source2sdk/animlib/CNmSoundEvent_Type_t.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmSoundEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventRelevance_t m_relevance; // 0x20            
            source2sdk::animlib::CNmSoundEvent_Type_t m_type; // 0x24            
            CUtlString m_name; // 0x28            
            source2sdk::animlib::CNmSoundEvent_Position_t m_position; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            CUtlString m_attachmentName; // 0x38            
            CUtlString m_tags; // 0x40            
            bool m_bIsServerOnly; // 0x48            
            bool m_bContinuePlayingSoundAtDurationEnd; // 0x49            
            uint8_t _pad004a[0x2]; // 0x4a
            float m_flDurationInterruptionThreshold; // 0x4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmSoundEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmSoundEvent) == 0x50);
    };
};
