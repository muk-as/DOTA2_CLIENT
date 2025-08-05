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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
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
            uint8_t _pad05e8[0x18]; // 0x5e8
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x600            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x608            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x610            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMins; // 0x618            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMaxs; // 0x624            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMins; // 0x630            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMaxs; // 0x63c            
            // metadata: MNetworkEnable
            std::int32_t m_nAABBDirection; // 0x648            
            uint8_t _pad064c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundOpvarSetOBB) == 0x650);
    };
};
