#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BlessingTypeID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            source2sdk::client::BlessingTypeID_t nID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPanoramaImageName szIconImage; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::BlessingType_t, nID) == 0x_);
        static_assert(offsetof(source2sdk::client::BlessingType_t, szIconImage) == 0x_);
        
        static_assert(sizeof(source2sdk::client::BlessingType_t) == 0x_);
    };
};
