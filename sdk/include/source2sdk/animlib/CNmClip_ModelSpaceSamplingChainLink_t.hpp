#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmClip_ModelSpaceSamplingChainLink_t
        {
        public:
            std::int32_t m_nBoneIdx; // 0x0            
            std::int32_t m_nParentBoneIdx; // 0x4            
            std::int32_t m_nParentChainLinkIdx; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t, m_nBoneIdx) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t, m_nParentBoneIdx) == 0x4);
        static_assert(offsetof(source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t, m_nParentChainLinkIdx) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t) == 0xc);
    };
};
