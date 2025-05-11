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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x50
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FootFixedData_t
        {
        public:
            VectorAligned m_vToeOffset; // 0x0            
            VectorAligned m_vHeelOffset; // 0x10            
            std::int32_t m_nTargetBoneIndex; // 0x20            
            std::int32_t m_nAnkleBoneIndex; // 0x24            
            std::int32_t m_nIKAnchorBoneIndex; // 0x28            
            std::int32_t m_ikChainIndex; // 0x2c            
            float m_flMaxIKLength; // 0x30            
            std::int32_t m_nFootIndex; // 0x34            
            std::int32_t m_nTagIndex; // 0x38            
            float m_flMaxRotationLeft; // 0x3c            
            float m_flMaxRotationRight; // 0x40            
            uint8_t _pad0044[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_vToeOffset) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_vHeelOffset) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nTargetBoneIndex) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nAnkleBoneIndex) == 0x24);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nIKAnchorBoneIndex) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_ikChainIndex) == 0x2c);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxIKLength) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nFootIndex) == 0x34);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_nTagIndex) == 0x38);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxRotationLeft) == 0x3c);
        static_assert(offsetof(source2sdk::animgraphlib::FootFixedData_t, m_flMaxRotationRight) == 0x40);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootFixedData_t) == 0x50);
    };
};
