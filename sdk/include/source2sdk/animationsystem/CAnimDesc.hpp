#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimActivity.hpp"
#include "source2sdk/animationsystem/CAnimDesc_Flag.hpp"
#include "source2sdk/animationsystem/CAnimEncodedFrames.hpp"
#include "source2sdk/animationsystem/CAnimEventDefinition.hpp"
#include "source2sdk/animationsystem/CAnimLocalHierarchy.hpp"
#include "source2sdk/animationsystem/CAnimMovement.hpp"
#include "source2sdk/animationsystem/CAnimSequenceParams.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimDesc
        {
        public:
            CBufferString m_name; // 0x_            
            source2sdk::animationsystem::CAnimDesc_Flag m_flags; // 0x_            
            float fps; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MKV3TransferName "m_pData"
            source2sdk::animationsystem::CAnimEncodedFrames m_Data; // 0x_            
            // m_movementArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimMovement> m_movementArray;
            char m_movementArray[0x_]; // 0x_            
            CTransform m_xInitialOffset; // 0x_            
            // m_eventArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimEventDefinition> m_eventArray;
            char m_eventArray[0x_]; // 0x_            
            // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimActivity> m_activityArray;
            char m_activityArray[0x_]; // 0x_            
            // m_hierarchyArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimLocalHierarchy> m_hierarchyArray;
            char m_hierarchyArray[0x_]; // 0x_            
            float framestalltime; // 0x_            
            Vector m_vecRootMin; // 0x_            
            Vector m_vecRootMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecBoneWorldMin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecBoneWorldMin;
            char m_vecBoneWorldMin[0x_]; // 0x_            
            // m_vecBoneWorldMax has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vecBoneWorldMax;
            char m_vecBoneWorldMax[0x_]; // 0x_            
            source2sdk::animationsystem::CAnimSequenceParams m_sequenceParams; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, fps) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_Data) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_movementArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_xInitialOffset) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_eventArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_activityArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_hierarchyArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, framestalltime) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_vecRootMin) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_vecRootMax) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_vecBoneWorldMin) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_vecBoneWorldMax) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimDesc, m_sequenceParams) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimDesc) == 0x_);
    };
};
