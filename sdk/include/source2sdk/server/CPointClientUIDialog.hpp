#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseClientUIEntity.hpp"
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
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hActivator"
        #pragma pack(push, 1)
        class CPointClientUIDialog : public source2sdk::server::CBaseClientUIEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDialogActivatorChanged"
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0x9a0            
            bool m_bStartEnabled; // 0x9a4            
            uint8_t _pad09a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIDialog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIDialog) == 0x9a8);
    };
};
