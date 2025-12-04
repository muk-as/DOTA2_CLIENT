#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderHairStrandInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        class CRenderGroom
        {
        public:
            // m_hairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderHairStrandInfo_t> m_hairs;
            char m_hairs[0x_]; // 0x_            
            // m_hairPositionOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_hairPositionOffsets;
            char m_hairPositionOffsets[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hSimParamsMat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSimParamsMat;
            char m_hSimParamsMat[0x_]; // 0x_            
            // m_strandSegmentCountHist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_strandSegmentCountHist;
            char m_strandSegmentCountHist[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMaxSegmentsPerHairStrand; // 0x_            
            std::int32_t m_nGuideHairCount; // 0x_            
            std::int32_t m_nHairCount; // 0x_            
            std::int32_t m_nTotalVertexCount; // 0x_            
            std::int32_t m_nTotalSegmentCount; // 0x_            
            std::int32_t m_nGroomGroupID; // 0x_            
            std::int32_t m_nAttachBoneIdx; // 0x_            
            std::int32_t m_nAttachMeshIdx; // 0x_            
            std::int32_t m_nAttachMeshDrawCallIdx; // 0x_            
            bool m_bEnableSimulation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hairs) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hairPositionOffsets) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_hSimParamsMat) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_strandSegmentCountHist) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nMaxSegmentsPerHairStrand) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nGuideHairCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nHairCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nTotalVertexCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nTotalSegmentCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nGroomGroupID) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachBoneIdx) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachMeshIdx) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_nAttachMeshDrawCallIdx) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CRenderGroom, m_bEnableSimulation) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CRenderGroom) == 0x_);
    };
};
