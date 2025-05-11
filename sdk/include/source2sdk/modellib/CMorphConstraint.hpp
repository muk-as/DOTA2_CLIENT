#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CBaseConstraint.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMorphConstraint : public source2sdk::modellib::CBaseConstraint
        {
        public:
            CUtlString m_sTargetMorph; // 0x68            
            std::int32_t m_nSlaveChannel; // 0x70            
            float m_flMin; // 0x74            
            float m_flMax; // 0x78            
            uint8_t _pad007c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMorphConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CMorphConstraint) == 0x88);
    };
};
