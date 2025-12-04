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
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RenderHairStrandInfo_t
        {
        public:
            std::uint32_t m_nGuideHairIndices_nSurfaceTriIndex[2]; // 0x_            
            std::uint16_t m_vGuideBary_vBaseBary[4]; // 0x_            
            std::uint16_t m_vRootOffset_flLengthScale[4]; // 0x_            
            std::uint16_t m_nPackedBaseUv[2]; // 0x_            
            std::uint32_t m_nPackedSurfaceNormalOs; // 0x_            
            std::uint32_t m_nPackedSurfaceTangentOs; // 0x_            
            std::uint32_t m_nDataOffset_Segments; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_nGuideHairIndices_nSurfaceTriIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_vGuideBary_vBaseBary) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_vRootOffset_flLengthScale) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_nPackedBaseUv) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_nPackedSurfaceNormalOs) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_nPackedSurfaceTangentOs) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderHairStrandInfo_t, m_nDataOffset_Segments) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::RenderHairStrandInfo_t) == 0x_);
    };
};
