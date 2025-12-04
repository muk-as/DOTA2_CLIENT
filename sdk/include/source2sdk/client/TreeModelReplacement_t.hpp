#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nBinaryObjectID"
        // static metadata: MNetworkVarNames "char m_szModel"
        #pragma pack(push, 1)
        struct TreeModelReplacement_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nBinaryObjectID; // 0x_            
            // metadata: MNetworkEnable
            char m_szModel[512]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TreeModelReplacement_t, m_nBinaryObjectID) == 0x_);
        static_assert(offsetof(source2sdk::client::TreeModelReplacement_t, m_szModel) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TreeModelReplacement_t) == 0x_);
    };
};
