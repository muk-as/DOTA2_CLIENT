#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootDefinition
        {
        public:
            CUtlString m_name; // 0x_            
            CUtlString m_ankleBoneName; // 0x_            
            CUtlString m_toeBoneName; // 0x_            
            Vector m_vBallOffset; // 0x_            
            Vector m_vHeelOffset; // 0x_            
            float m_flFootLength; // 0x_            
            float m_flBindPoseDirectionMS; // 0x_            
            float m_flTraceHeight; // 0x_            
            float m_flTraceRadius; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_ankleBoneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_toeBoneName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_vBallOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_vHeelOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_flFootLength) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_flBindPoseDirectionMS) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_flTraceHeight) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CFootDefinition, m_flTraceRadius) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CFootDefinition) == 0x_);
    };
};
