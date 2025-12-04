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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmSoundEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::CNmEventRelevance_t m_relevance; // 0x_            
            source2sdk::animlib::CNmSoundEvent_Type_t m_type; // 0x_            
            CUtlString m_name; // 0x_            
            source2sdk::animlib::CNmSoundEvent_Position_t m_position; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_attachmentName; // 0x_            
            CUtlString m_tags; // 0x_            
            bool m_bIsServerOnly; // 0x_            
            bool m_bContinuePlayingSoundAtDurationEnd; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDurationInterruptionThreshold; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmSoundEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmSoundEvent) == 0x_);
    };
};
