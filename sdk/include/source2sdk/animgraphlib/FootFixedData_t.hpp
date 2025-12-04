#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FootFixedData_t
        {
        public:
            VectorAligned m_vToeOffset; // 0x_            
            VectorAligned m_vHeelOffset; // 0x_            
            std::int32_t m_nTargetBoneIndex; // 0x_            
            std::int32_t m_nAnkleBoneIndex; // 0x_            
            std::int32_t m_nIKAnchorBoneIndex; // 0x_            
            std::int32_t m_ikChainIndex; // 0x_            
            float m_flMaxIKLength; // 0x_            
            std::int32_t m_nFootIndex; // 0x_            
            std::int32_t m_nTagIndex; // 0x_            
            float m_flMaxRotationLeft; // 0x_            
            float m_flMaxRotationRight; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_vToeOffset) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_vHeelOffset) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nTargetBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nAnkleBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nIKAnchorBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_ikChainIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxIKLength) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nFootIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nTagIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxRotationLeft) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxRotationRight) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootFixedData_t) == 0x_);
    };
};
