#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CSplineConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0x48]; // 0x558
        Vector m_vAnchorOffsetRestore; // 0x5a0        
        bool m_bEnableLateralConstraint; // 0x5ac        
        bool m_bEnableVerticalConstraint; // 0x5ad        
        bool m_bEnableAngularConstraint; // 0x5ae        
        [[maybe_unused]] std::uint8_t pad_0x5af[0x1]; // 0x5af
        float m_flLinearFrequency; // 0x5b0        
        float m_flLinarDampingRatio; // 0x5b4        
        
        // Datamap fields:
        // void CSplineConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
    static_assert(sizeof(CSplineConstraint) == 0x5b8);
};
