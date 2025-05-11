#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootPinningPoseOpFixedData_t.hpp"
#include "source2sdk/animgraphlib/FootPinningTimingSource.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootPinningUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            uint8_t _pad0070[0x8]; // 0x70
            source2sdk::animgraphlib::FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x78            
            source2sdk::animgraphlib::FootPinningTimingSource m_eTimingSource; // 0xa8            
            uint8_t _pad00ac[0x4]; // 0xac
            // m_params has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimParamHandle> m_params;
            char m_params[0x18]; // 0xb0            
            bool m_bResetChild; // 0xc8            
            uint8_t _pad00c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootPinningUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootPinningUpdateNode) == 0xd0);
    };
};
