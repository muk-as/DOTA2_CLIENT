#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"

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
        #pragma pack(push, 1)
        class CTurnHelperUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimValueSource m_facingTarget; // 0x_            
            float m_turnStartTimeOffset; // 0x_            
            float m_turnDuration; // 0x_            
            bool m_bMatchChildDuration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_manualTurnOffset; // 0x_            
            bool m_bUseManualTurnOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTurnHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CTurnHelperUpdateNode) == 0x_);
    };
};
