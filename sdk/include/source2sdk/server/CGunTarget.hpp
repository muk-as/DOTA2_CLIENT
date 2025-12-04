#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGunTarget : public source2sdk::server::CBaseToggle
        {
        public:
            bool m_on; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0x_            
            
            // Datamap fields:
            // void CGunTargetNext; // 0x_
            // void CGunTargetStart; // 0x_
            // void CGunTargetWait; // 0x_
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // void InputToggle; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGunTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGunTarget) == 0x_);
    };
};
