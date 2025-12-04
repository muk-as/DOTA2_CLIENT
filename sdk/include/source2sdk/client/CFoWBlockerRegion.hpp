#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/FowBlocker_t.hpp"

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
        // static metadata: MNetworkVarNames "FowBlocker_t m_vecFowBlockers"
        // static metadata: MNetworkVarNames "float m_flMinX"
        // static metadata: MNetworkVarNames "float m_flMaxX"
        // static metadata: MNetworkVarNames "float m_flMinY"
        // static metadata: MNetworkVarNames "float m_flMaxY"
        // static metadata: MNetworkVarNames "float m_flGridSize"
        #pragma pack(push, 1)
        class CFoWBlockerRegion : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_vecFowBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::FowBlocker_t> m_vecFowBlockers;
            char m_vecFowBlockers[0x_]; // 0x_            
            // metadata: MNetworkEnable
            float m_flMinX; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxX; // 0x_            
            // metadata: MNetworkEnable
            float m_flMinY; // 0x_            
            // metadata: MNetworkEnable
            float m_flMaxY; // 0x_            
            // metadata: MNetworkEnable
            float m_flGridSize; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFoWBlockerRegion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFoWBlockerRegion) == 0x_);
    };
};
