#pragma once
#include "source2sdk/animationsystem/AnimParamType_t.hpp"
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CExpressionActionUpdater : public animgraphlib::CAnimActionUpdater
    {
    public:
        animgraphlib::CAnimParamHandle m_hParam; // 0x18        
        animationsystem::AnimParamType_t m_eParamType; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x1b[0x1]; // 0x1b
        modellib::AnimScriptHandle m_hScript; // 0x1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CExpressionActionUpdater because it is not a standard-layout class
    static_assert(sizeof(CExpressionActionUpdater) == 0x20);
};
