#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"

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
        // static metadata: MPropertyFriendlyName "Audio Tag"
        #pragma pack(push, 1)
        class CAudioAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Sound Event"
            // metadata: MPropertyAttributeEditor "SoundPicker()"
            CUtlString m_clipName; // 0x_            
            // metadata: MPropertyFriendlyName "Attachment"
            // metadata: MPropertyAttributeChoiceName "Attachment"
            CUtlString m_attachmentName; // 0x_            
            // metadata: MPropertyFriendlyName "Volume"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flVolume; // 0x_            
            // metadata: MPropertyFriendlyName "Stop on Tag End"
            bool m_bStopWhenTagEnds; // 0x_            
            // metadata: MPropertyFriendlyName "Stop When Graph Destroyed"
            bool m_bStopWhenGraphEnds; // 0x_            
            // metadata: MPropertyFriendlyName "Play on Server"
            bool m_bPlayOnServer; // 0x_            
            // metadata: MPropertyFriendlyName "Play on Client"
            bool m_bPlayOnClient; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAudioAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAudioAnimTag) == 0x_);
    };
};
