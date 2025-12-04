#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMaxs"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMaxs"
        // static metadata: MNetworkVarNames "int m_nAABBDirection"
        #pragma pack(push, 1)
        class CCitadelSoundOpvarSetOBB : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMaxs; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMaxs; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAABBDirection; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundOpvarSetOBB) == 0x_);
    };
};
