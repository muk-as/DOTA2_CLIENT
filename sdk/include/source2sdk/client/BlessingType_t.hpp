#pragma once
#include "source2sdk/client/BlessingTypeID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataOutlinerIconExpr "'tools/images/common/icon_type_generic.png'"
    #pragma pack(push, 1)
    struct BlessingType_t
    {
    public:
        // metadata: MVDataUniqueMonotonicInt "m_nNextBlessingTypeID"
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::BlessingTypeID_t nID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        CPanoramaImageName szIconImage; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(BlessingType_t, nID) == 0x0);
    static_assert(offsetof(BlessingType_t, szIconImage) == 0x10);
    
    static_assert(sizeof(BlessingType_t) == 0x20);
};
