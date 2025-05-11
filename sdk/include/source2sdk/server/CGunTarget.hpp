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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x858
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGunTarget : public source2sdk::server::CBaseToggle
        {
        public:
            bool m_on; // 0x828            
            uint8_t _pad0829[0x3]; // 0x829
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x82c            
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0x830            
            
            // Datamap fields:
            // void CGunTargetNext; // 0x0
            // void CGunTargetStart; // 0x0
            // void CGunTargetWait; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGunTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGunTarget) == 0x858);
    };
};
